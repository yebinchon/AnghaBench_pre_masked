
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gb_sdio_set_ios_request {int dummy; } ;
struct gb_sdio_host {int gbphy_dev; int connection; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,struct gb_sdio_set_ios_request*,int,int *,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct gb_sdio_host *VAR_1,
      struct gb_sdio_set_ios_request *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_1(VAR_1->gbphy_dev);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_1->connection, VAR_0, VAR_2,
    sizeof(*VAR_2), ((void*)0), 0);

 FUNC_2(VAR_1->gbphy_dev);

 return VAR_3;
}
