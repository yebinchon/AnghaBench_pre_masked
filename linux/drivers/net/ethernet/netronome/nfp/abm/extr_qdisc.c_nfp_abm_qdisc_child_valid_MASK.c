
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfp_qdisc {scalar_t__* children; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static bool FUNC_0(struct nfp_qdisc *VAR_1, unsigned int VAR_2)
{
 return VAR_1->children[VAR_2] &&
        VAR_1->children[VAR_2] != VAR_0;
}
