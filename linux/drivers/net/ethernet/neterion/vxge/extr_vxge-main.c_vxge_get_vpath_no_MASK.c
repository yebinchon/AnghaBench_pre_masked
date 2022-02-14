
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct vxgedev {int no_of_vpath; int* vpath_selector; } ;
struct tcphdr {int dest; int source; } ;
struct sk_buff {scalar_t__ protocol; } ;
struct iphdr {int ihl; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 struct iphdr* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct iphdr*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static u32 FUNC_4(struct vxgedev *VAR_1, struct sk_buff *VAR_2)
{
 u16 VAR_3, VAR_4 = 0;
 if (VAR_2->protocol == FUNC_0(VAR_0)) {
  struct iphdr *VAR_5;
  struct tcphdr *VAR_6;

  VAR_5 = FUNC_1(VAR_2);

  if (!FUNC_2(VAR_5)) {
   VAR_6 = (struct tcphdr *)(((unsigned char *)VAR_5) +
     VAR_5->ihl*4);

   VAR_3 = VAR_1->no_of_vpath;
   VAR_4 = (FUNC_3(VAR_6->source) +
    FUNC_3(VAR_6->dest)) &
    VAR_1->vpath_selector[VAR_3 - 1];
   if (VAR_4 >= VAR_3)
    VAR_4 = VAR_3 - 1;
  }
 }
 return VAR_4;
}
