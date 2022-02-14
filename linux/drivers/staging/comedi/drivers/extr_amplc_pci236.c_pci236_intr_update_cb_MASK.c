
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pc236_private {scalar_t__ lcr_iobase; } ;
struct comedi_device {struct pc236_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_3, bool VAR_4)
{
 struct pc236_private *VAR_5 = VAR_3->private;


 FUNC_0(VAR_4 ? VAR_1 : VAR_0,
      VAR_5->lcr_iobase + VAR_2);
}
