
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scif_port {int ref_cnt; } ;
struct TYPE_2__ {int port_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct scif_port*,int,int,int ) ;
 struct scif_port* FUNC_1 (int,int ) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(int VAR_4, int VAR_5)
{
 int VAR_6;
 struct scif_port *VAR_7 = FUNC_1(sizeof(*VAR_7), VAR_1);

 if (!VAR_7)
  return -VAR_0;
 FUNC_2(&VAR_2.port_lock);
 VAR_6 = FUNC_0(&VAR_3, VAR_7, VAR_4, VAR_5, VAR_1);
 if (VAR_6 >= 0)
  VAR_7->ref_cnt++;
 FUNC_3(&VAR_2.port_lock);
 return VAR_6;
}
