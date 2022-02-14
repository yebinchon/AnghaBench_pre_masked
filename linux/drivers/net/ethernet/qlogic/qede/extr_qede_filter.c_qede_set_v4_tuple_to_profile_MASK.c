
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct qede_arfs_tuple {int stringify; int build_hdr; int ip_comp; int mode; scalar_t__ src_ipv4; scalar_t__ dst_ipv4; scalar_t__ dst_port; scalar_t__ src_port; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_1(struct qede_dev *VAR_8,
     struct qede_arfs_tuple *VAR_9)
{



 if (VAR_9->src_port && VAR_9->dst_port && VAR_9->src_ipv4 && VAR_9->dst_ipv4) {
  VAR_9->mode = VAR_1;
 } else if (!VAR_9->src_port && VAR_9->dst_port &&
     !VAR_9->src_ipv4 && !VAR_9->dst_ipv4) {
  VAR_9->mode = VAR_4;
 } else if (!VAR_9->src_port && !VAR_9->dst_port &&
     !VAR_9->dst_ipv4 && VAR_9->src_ipv4) {
  VAR_9->mode = VAR_3;
 } else if (!VAR_9->src_port && !VAR_9->dst_port &&
     VAR_9->dst_ipv4 && !VAR_9->src_ipv4) {
  VAR_9->mode = VAR_2;
 } else {
  FUNC_0(VAR_8, "Invalid N-tuple\n");
  return -VAR_0;
 }

 VAR_9->ip_comp = VAR_6;
 VAR_9->build_hdr = VAR_5;
 VAR_9->stringify = VAR_7;

 return 0;
}
