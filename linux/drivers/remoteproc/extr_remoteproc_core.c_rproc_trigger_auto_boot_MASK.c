
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rproc {int dev; int firmware; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int ,int ,int ,int *,int ,struct rproc*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct rproc *VAR_4)
{
 int VAR_5;





 VAR_5 = FUNC_1(VAR_2, VAR_0,
          VAR_4->firmware, &VAR_4->dev, VAR_1,
          VAR_4, VAR_3);
 if (VAR_5 < 0)
  FUNC_0(&VAR_4->dev, "request_firmware_nowait err: %d\n", VAR_5);

 return VAR_5;
}
