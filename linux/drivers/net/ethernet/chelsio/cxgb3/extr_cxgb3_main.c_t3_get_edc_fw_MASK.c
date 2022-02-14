
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct firmware {int size; scalar_t__ data; } ;
struct cphy {int * phy_cache; struct adapter* adapter; } ;
struct adapter {TYPE_1__* pdev; } ;
typedef int csum ;
typedef int __be32 ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (struct adapter*,char*,int,...) ;
 int VAR_0 ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int *,char*,char const*) ;
 char* FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int const) ;
 int FUNC_5 (struct firmware const*) ;
 int FUNC_6 (struct firmware const**,char const*,int *) ;

int FUNC_7(struct cphy *VAR_1, int VAR_2, int VAR_3)
{
 struct adapter *VAR_4 = VAR_1->adapter;
 const struct firmware *VAR_5;
 const char *VAR_6;
 u32 VAR_7;
 const __be32 *VAR_8;
 u16 *VAR_9 = VAR_1->phy_cache;
 int VAR_10, VAR_11 = -VAR_0;

 VAR_6 = FUNC_3(VAR_2);
 if (VAR_6)
  VAR_11 = FUNC_6(&VAR_5, VAR_6, &VAR_4->pdev->dev);
 if (VAR_11 < 0) {
  FUNC_2(&VAR_4->pdev->dev,
   "could not upgrade firmware: unable to load %s\n",
   VAR_6);
  return VAR_11;
 }


 if (VAR_5->size > VAR_3 + 4) {
  FUNC_0(VAR_4, "firmware image too large %u, expected %d\n",
         (unsigned int)VAR_5->size, VAR_3 + 4);
  VAR_11 = -VAR_0;
 }


 VAR_8 = (const __be32 *)VAR_5->data;
 for (VAR_7 = 0, VAR_10 = 0; VAR_10 < VAR_5->size / sizeof(VAR_7); VAR_10++)
  VAR_7 += FUNC_4(VAR_8[VAR_10]);

 if (VAR_7 != 0xffffffff) {
  FUNC_0(VAR_4, "corrupted firmware image, checksum %u\n",
         VAR_7);
  VAR_11 = -VAR_0;
 }

 for (VAR_10 = 0; VAR_10 < VAR_3 / 4 ; VAR_10++) {
  *VAR_9++ = (FUNC_1(VAR_8[VAR_10]) & 0xffff0000) >> 16;
  *VAR_9++ = FUNC_1(VAR_8[VAR_10]) & 0xffff;
 }

 FUNC_5(VAR_5);

 return VAR_11;
}
