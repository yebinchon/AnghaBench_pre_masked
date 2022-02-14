
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int tuple_t ;
struct pcmcia_device {int dummy; } ;
struct net_device {int dummy; } ;
struct TYPE_4__ {int* ofs; int ns; int * str; } ;
struct TYPE_5__ {TYPE_1__ version_1; } ;
typedef TYPE_2__ cisparse_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct net_device*,int *) ;
 scalar_t__ FUNC_1 (int *,TYPE_2__*) ;

__attribute__((used)) static int FUNC_2(struct pcmcia_device *VAR_1,
         tuple_t *VAR_2,
         void *VAR_3)
{
 struct net_device *VAR_4 = VAR_3;
 cisparse_t VAR_5;
 u8 *VAR_6;

 if (FUNC_1(VAR_2, &VAR_5))
  return -VAR_0;

 VAR_6 = VAR_5.version_1.str + VAR_5.version_1.ofs[3];

 if ((VAR_5.version_1.ns > 3) && (FUNC_0(VAR_4, VAR_6) == 0))
  return 0;

 return -VAR_0;
}
