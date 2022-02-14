
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct rss_vf_conf {int rss_vf_vfh; int rss_vf_vfl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct seq_file*,char*,int,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int FUNC_4 (struct seq_file*,char*) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct seq_file *VAR_9, void *VAR_10, int VAR_11)
{
 if (VAR_10 == VAR_1) {
  FUNC_4(VAR_9, "     RSS                     Hash Tuple Enable\n");
  FUNC_4(VAR_9, "     Enable   IVF  Dis  Enb  IPv6      IPv4      UDP    Def  Secret Key\n");
  FUNC_4(VAR_9, " VF  Chn Prt  Map  VLAN  uP  Four Two  Four Two  Four   Que  Idx       Hash\n");
 } else {
  struct rss_vf_conf *VAR_12 = VAR_10;

  FUNC_3(VAR_9, "%3d  %3s %3s  %3d   %3s %3s   %3s %3s   %3s  %3s   %3s  %4d  %3d %#10x\n",
      VAR_11,
      FUNC_5(VAR_12->rss_vf_vfh & VAR_2),
      FUNC_5(VAR_12->rss_vf_vfh & VAR_6),
      FUNC_2(VAR_12->rss_vf_vfh),
      FUNC_5(VAR_12->rss_vf_vfh & VAR_8),
      FUNC_5(VAR_12->rss_vf_vfh & VAR_7),
      FUNC_5(VAR_12->rss_vf_vfh & VAR_3),
      FUNC_5(VAR_12->rss_vf_vfh & VAR_5),
      FUNC_5(VAR_12->rss_vf_vfh & VAR_3),
      FUNC_5(VAR_12->rss_vf_vfh & VAR_4),
      FUNC_5(VAR_12->rss_vf_vfh & VAR_0),
      FUNC_0(VAR_12->rss_vf_vfh),
      FUNC_1(VAR_12->rss_vf_vfh),
      VAR_12->rss_vf_vfl);
 }
 return 0;
}
