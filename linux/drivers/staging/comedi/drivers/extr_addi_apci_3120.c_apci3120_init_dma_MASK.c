
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {struct apci3120_private* private; } ;
struct apci3120_private {scalar_t__ addon; scalar_t__ amcc; } ;
struct apci3120_dmabuf {int hw; int use_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct comedi_device*,int,scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_14,
         struct apci3120_dmabuf *VAR_15)
{
 struct apci3120_private *VAR_16 = VAR_14->private;


 FUNC_1(VAR_1 | VAR_0,
      VAR_16->amcc + VAR_3);


 FUNC_0(VAR_14, VAR_1 | VAR_0,
        VAR_3);


 FUNC_1(VAR_13 | VAR_12,
      VAR_16->amcc + VAR_7);


 FUNC_0(VAR_14, VAR_15->hw, VAR_4);


 FUNC_0(VAR_14, VAR_15->use_size, VAR_5);


 FUNC_1(VAR_11 | VAR_2,
      VAR_16->amcc + VAR_6);


 FUNC_2(VAR_9 | VAR_8,
      VAR_16->addon + VAR_10);
}
