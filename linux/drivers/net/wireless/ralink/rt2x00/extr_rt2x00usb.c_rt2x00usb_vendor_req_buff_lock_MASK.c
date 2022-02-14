
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {void* cache; } ;
struct rt2x00_dev {TYPE_1__ csr; int csr_mutex; } ;


 int FUNC_0 (int) ;
 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_1 (void*,void*,scalar_t__ const) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rt2x00_dev*,char*) ;
 int FUNC_4 (struct rt2x00_dev*,scalar_t__ const,scalar_t__ const,scalar_t__ const,int ,void*,scalar_t__ const,int const) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct rt2x00_dev *VAR_4,
       const u8 VAR_5, const u8 VAR_6,
       const u16 VAR_7, void *VAR_8,
       const u16 VAR_9, const int VAR_10)
{
 int VAR_11;

 FUNC_0(!FUNC_2(&VAR_4->csr_mutex));




 if (FUNC_5(!VAR_4->csr.cache || VAR_9 > VAR_0)) {
  FUNC_3(VAR_4, "CSR cache not available\n");
  return -VAR_1;
 }

 if (VAR_6 == VAR_3)
  FUNC_1(VAR_4->csr.cache, VAR_8, VAR_9);

 VAR_11 = FUNC_4(VAR_4, VAR_5, VAR_6,
       VAR_7, 0, VAR_4->csr.cache,
       VAR_9, VAR_10);

 if (!VAR_11 && VAR_6 == VAR_2)
  FUNC_1(VAR_8, VAR_4->csr.cache, VAR_9);

 return VAR_11;
}
