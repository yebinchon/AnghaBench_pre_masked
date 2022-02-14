
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct comedi_device*,int,int ,int ) ;
 int FUNC_1 (struct comedi_device*,int ) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct comedi_device *VAR_5)
{

 FUNC_1(VAR_5, 0);


 FUNC_0(VAR_5, 0xffffffff, 0, 0);

 FUNC_2(VAR_0 | VAR_2,
        VAR_5->mmio + VAR_1);
 FUNC_2(VAR_3, VAR_5->mmio + VAR_4);
}
