
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_2__ {int portid; } ;
struct nvmet_port {TYPE_1__ disc_addr; scalar_t__ enabled; } ;
struct config_item {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (char const*,int ,int *) ;
 int FUNC_2 (char*,...) ;
 struct nvmet_port* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct config_item *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct nvmet_port *VAR_5 = FUNC_3(VAR_2);
 u16 VAR_6 = 0;

 if (FUNC_1(VAR_3, 0, &VAR_6)) {
  FUNC_2("Invalid value '%s' for portid\n", VAR_3);
  return -VAR_1;
 }

 if (VAR_5->enabled) {
  FUNC_2("Cannot modify address while enabled\n");
  FUNC_2("Disable the address before modifying\n");
  return -VAR_0;
 }
 VAR_5->disc_addr.portid = FUNC_0(VAR_6);
 return VAR_4;
}
