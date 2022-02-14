
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct enc28j60_net {TYPE_1__* spi; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct device*,char*,int) ;
 int FUNC_1 (struct enc28j60_net*,int,int ,int *) ;
 int FUNC_2 (struct enc28j60_net*,int ) ;
 scalar_t__ FUNC_3 (struct enc28j60_net*) ;

__attribute__((used)) static void FUNC_4(struct enc28j60_net *VAR_3, u8 VAR_4[VAR_2])
{
 struct device *VAR_5 = &VAR_3->spi->dev;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_3, VAR_0);
 if (FUNC_3(VAR_3))
  FUNC_0(VAR_1, VAR_5, "reading TSV at addr:0x%04x\n",
      VAR_6 + 1);
 FUNC_1(VAR_3, VAR_6 + 1, VAR_2, VAR_4);
}
