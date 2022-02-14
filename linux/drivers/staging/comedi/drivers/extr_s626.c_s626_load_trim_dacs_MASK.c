
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct comedi_device {int dummy; } ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct comedi_device*,size_t,int ) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2)
{
 u8 VAR_3;
 int VAR_4;


 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); VAR_3++) {
  VAR_4 = FUNC_2(VAR_2, VAR_3,
       FUNC_1(VAR_2, VAR_0[VAR_3]));
  if (VAR_4)
   return VAR_4;
 }
 return 0;
}
