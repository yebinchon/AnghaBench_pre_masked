
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct vc_data {scalar_t__ vc_num; int vc_size_row; scalar_t__ vc_origin; } ;


 unsigned short* FUNC_0 (unsigned short*,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *,unsigned short*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static inline void FUNC_2(struct vc_data *VAR_6, int VAR_7,
           int VAR_8)
{
 unsigned short *VAR_9;

 if (VAR_6->vc_num != VAR_0)
  return;
 VAR_9 = (unsigned short *) (VAR_6->vc_origin + VAR_7 * VAR_6->vc_size_row);

 while (VAR_8) {
  FUNC_1((u16 *) VAR_4, VAR_9, VAR_6->vc_size_row);
  VAR_8--;
  VAR_9 = FUNC_0(VAR_9, 1);
  VAR_4 += VAR_6->vc_size_row;
  if (VAR_4 == VAR_3)
   VAR_4 = VAR_1;
  if (VAR_4 == VAR_5) {
   VAR_5 += VAR_6->vc_size_row;
   if (VAR_5 == VAR_3)
    VAR_5 = VAR_1;
  }
 }
 VAR_2 = VAR_4;
}
