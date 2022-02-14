
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct comedi_device*,int ,int,unsigned int) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_2, int VAR_3,
     unsigned int VAR_4)
{
 if (VAR_3 >= FUNC_0(0)) {

  VAR_3 -= FUNC_0(0);
 }
 VAR_4 = (VAR_4 == VAR_0) ? 1u : 0u;
 FUNC_1(VAR_2, VAR_1, 1 << VAR_3, VAR_4);
}
