
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct vb2_buffer {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int ,int) ;
 int FUNC_1 (struct vb2_buffer*,int ) ;
 int* FUNC_2 (struct vb2_buffer*,int ) ;

__attribute__((used)) static u32 FUNC_3(struct vb2_buffer *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2, 0);
 u32 VAR_4 = 0;
 u8 *VAR_5 = FUNC_2(VAR_2, 0) + VAR_3;

 if (VAR_3 < VAR_0) {
  VAR_4 = VAR_0 - VAR_3;
  FUNC_0(VAR_5, 0, VAR_4);
 }

 FUNC_0(VAR_5 + VAR_4, 0, VAR_1);
 VAR_5[VAR_4] = 0x00;
 VAR_5[VAR_4 + 1] = 0x00;
 VAR_5[VAR_4 + 2] = 0x01;
 VAR_5[VAR_4 + 3] = 0xff;

 return VAR_4;
}
