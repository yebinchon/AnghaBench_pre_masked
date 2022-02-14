
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa7134_go7007 {struct saa7134_dev* dev; } ;
struct saa7134_dev {int dummy; } ;
struct go7007 {int interrupt_available; int interrupt_data; int interrupt_value; struct saa7134_go7007* hpi_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct saa7134_dev*,int ,int *) ;
 int FUNC_1 (char*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct go7007 *VAR_2)
{
 struct saa7134_go7007 *VAR_3 = VAR_2->hpi_context;
 struct saa7134_dev *VAR_4 = VAR_3->dev;


 VAR_2->interrupt_available = 1;
 FUNC_0(VAR_4, VAR_1, &VAR_2->interrupt_value);
 FUNC_0(VAR_4, VAR_0, &VAR_2->interrupt_data);




 return 0;
}
