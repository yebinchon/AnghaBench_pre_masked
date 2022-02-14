
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct niu_classifier {int tcam_sz; int h1_init; int h2_init; scalar_t__ tcam_top; } ;
struct niu {TYPE_1__* parent; scalar_t__ port; struct niu_classifier clas; } ;
struct TYPE_2__ {int tcam_num_entries; int num_ports; } ;


 int FUNC_0 (struct niu*) ;

__attribute__((used)) static int FUNC_1(struct niu *VAR_0)
{
 struct niu_classifier *VAR_1 = &VAR_0->clas;

 VAR_1->tcam_top = (u16) VAR_0->port;
 VAR_1->tcam_sz = VAR_0->parent->tcam_num_entries / VAR_0->parent->num_ports;
 VAR_1->h1_init = 0xffffffff;
 VAR_1->h2_init = 0xffff;

 return FUNC_0(VAR_0);
}
