
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {scalar_t__ pcibar1; int calib_src; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_3, unsigned int VAR_4)
{
 struct cb_pcidas_private *VAR_5 = VAR_3->private;

 VAR_4 |= VAR_1 | FUNC_0(VAR_5->calib_src);


 FUNC_1(VAR_4, VAR_5->pcibar1 + VAR_2);
 FUNC_2(1);
 FUNC_1(VAR_4 | VAR_0,
      VAR_5->pcibar1 + VAR_2);
 FUNC_2(1);
 FUNC_1(VAR_4, VAR_5->pcibar1 + VAR_2);
 FUNC_2(1);
}
