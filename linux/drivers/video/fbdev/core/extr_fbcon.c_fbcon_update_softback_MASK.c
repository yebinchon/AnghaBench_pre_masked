
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vc_data {int vc_size_row; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0(struct vc_data *VAR_4)
{
 int VAR_5 = VAR_0 / VAR_4->vc_size_row;

 if (VAR_5 > 5)
  VAR_2 = VAR_1 + VAR_5 * VAR_4->vc_size_row;
 else


  VAR_3 = 0;
}
