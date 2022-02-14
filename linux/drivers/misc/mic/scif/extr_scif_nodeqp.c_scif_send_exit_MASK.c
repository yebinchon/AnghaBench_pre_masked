
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_4__ {int node; } ;
struct scifmsg {TYPE_2__ dst; TYPE_1__ src; int uop; } ;
struct scif_dev {scalar_t__ exit; int node; } ;
struct TYPE_6__ {int exitwq; int nodeid; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (struct scif_dev*,struct scifmsg*) ;
 int FUNC_1 (int ,int,int ) ;

void FUNC_2(struct scif_dev *VAR_6)
{
 struct scifmsg VAR_7;
 int VAR_8;

 VAR_6->exit = VAR_2;
 VAR_7.uop = VAR_3;
 VAR_7.src.node = VAR_5.nodeid;
 VAR_7.dst.node = VAR_6->node;
 VAR_8 = FUNC_0(VAR_6, &VAR_7);
 if (VAR_8)
  goto done;

 FUNC_1(VAR_5.exitwq, VAR_6->exit == VAR_0,
      VAR_4);
done:
 VAR_6->exit = VAR_1;
}
