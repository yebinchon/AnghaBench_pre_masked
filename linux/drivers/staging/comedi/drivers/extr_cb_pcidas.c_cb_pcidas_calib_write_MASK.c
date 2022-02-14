
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct cb_pcidas_private* private; } ;
struct cb_pcidas_private {scalar_t__ pcibar1; int calib_src; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_4 ;
 int FUNC_1 (unsigned int,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_5,
      unsigned int VAR_6, unsigned int VAR_7,
      bool VAR_8)
{
 struct cb_pcidas_private *VAR_9 = VAR_5->private;
 unsigned int VAR_10;
 unsigned int VAR_11;

 VAR_10 = VAR_2 | FUNC_0(VAR_9->calib_src);
 if (VAR_8) {

  VAR_10 |= VAR_4;
  FUNC_1(VAR_10, VAR_9->pcibar1 + VAR_3);
 }


 for (VAR_11 = 1 << (VAR_7 - 1); VAR_11; VAR_11 >>= 1) {
  if (VAR_6 & VAR_11)
   VAR_10 |= VAR_1;
  else
   VAR_10 &= ~VAR_1;
  FUNC_2(1);
  FUNC_1(VAR_10, VAR_9->pcibar1 + VAR_3);
 }
 FUNC_2(1);

 VAR_10 = VAR_2 | FUNC_0(VAR_9->calib_src);

 if (!VAR_8) {

  FUNC_1(VAR_10 | VAR_0,
       VAR_9->pcibar1 + VAR_3);
  FUNC_2(1);
 }


 FUNC_1(VAR_10, VAR_9->pcibar1 + VAR_3);
}
