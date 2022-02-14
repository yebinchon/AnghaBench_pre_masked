
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct allegro_dev {int v4l2_dev; int sram; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int const* const,size_t) ;
 int FUNC_1 (int,int ,int *,char*,size_t) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(struct allegro_dev *VAR_1,
      const u8 * const VAR_2, size_t VAR_3)
{
 int VAR_4 = 0;

 FUNC_1(1, VAR_0, &VAR_1->v4l2_dev,
   "copy mcu firmware (%zu B) to SRAM\n", VAR_3);
 VAR_4 = FUNC_0(VAR_1->sram, 0x0, VAR_2, VAR_3 / 4);
 if (VAR_4)
  FUNC_2(&VAR_1->v4l2_dev,
    "failed to copy firmware: %d\n", VAR_4);
}
