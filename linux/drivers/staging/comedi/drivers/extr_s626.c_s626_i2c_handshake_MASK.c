
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*,int *,int *,int ,int ) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (struct comedi_device*,int ,int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_6, u32 VAR_7)
{
 unsigned int VAR_8;
 int VAR_9;


 FUNC_3(VAR_7, VAR_6->mmio + VAR_3);





 FUNC_2(VAR_6, VAR_2, VAR_4);
 VAR_9 = FUNC_0(VAR_6, ((void*)0), ((void*)0), VAR_5, 0);
 if (VAR_9)
  return VAR_9;


 do {
  VAR_8 = FUNC_1(VAR_6->mmio + VAR_3);
 } while ((VAR_8 & (VAR_0 | VAR_1)) == VAR_0);


 return VAR_8 & VAR_1;
}
