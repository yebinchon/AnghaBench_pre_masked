
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct mfb_info {struct fsl_diu_data* parent; } ;
struct fsl_diu_data {int * cursor; } ;
struct fb_info {struct mfb_info* par; } ;
typedef int __le16 ;


 int FUNC_0 (unsigned int,int) ;
 int VAR_0 ;
 int FUNC_1 (void const*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct fb_info *VAR_1,
 const void *VAR_2, uint16_t VAR_3, uint16_t VAR_4,
 unsigned int VAR_5, unsigned int VAR_6)
{
 struct mfb_info *VAR_7 = VAR_1->par;
 struct fsl_diu_data *VAR_8 = VAR_7->parent;
 __le16 *VAR_9 = VAR_8->cursor;
 __le16 VAR_10 = FUNC_2(VAR_4);
 __le16 VAR_11 = FUNC_2(VAR_3);
 unsigned int VAR_12, VAR_13;

 for (VAR_12 = 0; VAR_12 < VAR_6; VAR_12++) {
  uint32_t VAR_14 = 1 << 31;
  uint32_t VAR_15 = FUNC_1(VAR_2);

  for (VAR_13 = 0; VAR_13 < VAR_5; VAR_13++) {
   VAR_9[VAR_13] = (VAR_15 & VAR_14) ? VAR_10 : VAR_11;
   VAR_14 >>= 1;
  }

  VAR_9 += VAR_0;
  VAR_2 += FUNC_0(VAR_5, 8);
 }
}
