
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int node; } ;
struct TYPE_4__ {int node; } ;
struct scifmsg {int* payload; TYPE_2__ dst; TYPE_1__ src; int uop; } ;
struct scif_dev {int dummy; } ;
struct TYPE_6__ {int nodeid; } ;


 int VAR_0 ;
 struct scif_dev* VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_0 (struct scif_dev*,struct scifmsg*) ;

__attribute__((used)) static int FUNC_1(int VAR_3, int VAR_4)
{
 struct scifmsg VAR_5;
 struct scif_dev *VAR_6 = &VAR_1[VAR_3];

 VAR_5.uop = VAR_0;
 VAR_5.src.node = VAR_2.nodeid;
 VAR_5.dst.node = VAR_3;
 VAR_5.payload[0] = VAR_4;
 return FUNC_0(VAR_6, &VAR_5);
}
