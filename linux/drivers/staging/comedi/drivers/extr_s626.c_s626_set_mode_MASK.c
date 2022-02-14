
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct comedi_device {int dummy; } ;


 int FUNC_0 (struct comedi_device*,unsigned int,int ,int ) ;
 int FUNC_1 (struct comedi_device*,unsigned int,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
     unsigned int VAR_1,
     u16 VAR_2, u16 VAR_3)
{
 if (VAR_1 < 3)
  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
 else
  FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
}
