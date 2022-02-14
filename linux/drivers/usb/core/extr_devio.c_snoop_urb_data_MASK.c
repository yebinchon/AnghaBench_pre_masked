
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct urb {int num_sgs; int * sg; int transfer_buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (int ,char*,int ,int,int,int ,int,int) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_3(struct urb *VAR_5, unsigned VAR_6)
{
 int VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_6, VAR_4);
 if (!VAR_3 || VAR_6 == 0)
  return;

 if (VAR_5->num_sgs == 0) {
  FUNC_1(VAR_1, "data: ", VAR_0, 32, 1,
   VAR_5->transfer_buffer, VAR_6, 1);
  return;
 }

 for (VAR_7 = 0; VAR_7 < VAR_5->num_sgs && VAR_6; VAR_7++) {
  VAR_8 = (VAR_6 > VAR_2) ? VAR_2 : VAR_6;
  FUNC_1(VAR_1, "data: ", VAR_0, 32, 1,
   FUNC_2(&VAR_5->sg[VAR_7]), VAR_8, 1);
  VAR_6 -= VAR_8;
 }
}
