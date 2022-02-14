
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ni_private {int ao_mode3; } ;
struct comedi_device {struct ni_private* private; } ;
struct comedi_cmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_device*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_5,
       const struct comedi_cmd *VAR_6)
{
 struct ni_private *VAR_7 = VAR_5->private;

 FUNC_0(VAR_5, VAR_3, VAR_4);

 VAR_7->ao_mode3 |= VAR_1;
 FUNC_0(VAR_5, VAR_7->ao_mode3, VAR_0);







 FUNC_0(VAR_5, VAR_2, VAR_4);
}
