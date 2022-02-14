
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {int * type; } ;
struct spmi_controller {int (* read_cmd ) (struct spmi_controller*,int ,int ,int ,int *,size_t) ;TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct spmi_controller*,int ,int ,int ,int *,size_t) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int,size_t,int *) ;

__attribute__((used)) static inline int FUNC_3(struct spmi_controller *VAR_2, u8 VAR_3,
    u8 VAR_4, u16 VAR_5, u8 *VAR_6, size_t VAR_7)
{
 int VAR_8;

 if (!VAR_2 || !VAR_2->read_cmd || VAR_2->dev.type != &VAR_1)
  return -VAR_0;

 FUNC_1(VAR_3, VAR_4, VAR_5);
 VAR_8 = VAR_2->read_cmd(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_2(VAR_3, VAR_4, VAR_5, VAR_8, VAR_7, VAR_6);
 return VAR_8;
}
