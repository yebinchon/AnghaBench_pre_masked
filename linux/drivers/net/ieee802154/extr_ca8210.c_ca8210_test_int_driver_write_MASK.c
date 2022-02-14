
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ca8210_test {int readq; int up_fifo; } ;
struct ca8210_priv {struct ca8210_test test; TYPE_1__* spi; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,char**,int) ;
 char* FUNC_2 (int const*,size_t,int ) ;
 struct ca8210_priv* FUNC_3 (void*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(
 const u8 *VAR_2,
 size_t VAR_3,
 void *VAR_4
)
{
 struct ca8210_priv *VAR_5 = FUNC_3(VAR_4);
 struct ca8210_test *VAR_6 = &VAR_5->test;
 char *VAR_7;
 int VAR_8;

 FUNC_0(
  &VAR_5->spi->dev,
  "test_interface: Buffering upstream message:\n"
 );
 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++)
  FUNC_0(&VAR_5->spi->dev, "%#03x\n", VAR_2[VAR_8]);

 VAR_7 = FUNC_2(VAR_2, VAR_3, VAR_1);
 if (!VAR_7)
  return -VAR_0;
 FUNC_1(&VAR_6->up_fifo, &VAR_7, 4);
 FUNC_4(&VAR_5->test.readq);

 return 0;
}
