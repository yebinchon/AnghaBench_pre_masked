
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qede_dev {int dummy; } ;
struct qede_arfs_tuple {int build_hdr; int ip_comp; int mode; int src_ipv6; int dst_ipv6; scalar_t__ dst_port; scalar_t__ src_port; } ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (struct qede_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int *,struct in6_addr*,int) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct qede_dev *VAR_7,
     struct qede_arfs_tuple *VAR_8,
     struct in6_addr *VAR_9)
{



 if (VAR_8->src_port && VAR_8->dst_port &&
     FUNC_1(&VAR_8->src_ipv6, VAR_9, sizeof(struct in6_addr)) &&
     FUNC_1(&VAR_8->dst_ipv6, VAR_9, sizeof(struct in6_addr))) {
  VAR_8->mode = VAR_1;
 } else if (!VAR_8->src_port && VAR_8->dst_port &&
     !FUNC_1(&VAR_8->src_ipv6, VAR_9, sizeof(struct in6_addr)) &&
     !FUNC_1(&VAR_8->dst_ipv6, VAR_9, sizeof(struct in6_addr))) {
  VAR_8->mode = VAR_4;
 } else if (!VAR_8->src_port && !VAR_8->dst_port &&
     !FUNC_1(&VAR_8->dst_ipv6, VAR_9, sizeof(struct in6_addr)) &&
     FUNC_1(&VAR_8->src_ipv6, VAR_9, sizeof(struct in6_addr))) {
  VAR_8->mode = VAR_3;
 } else if (!VAR_8->src_port && !VAR_8->dst_port &&
     FUNC_1(&VAR_8->dst_ipv6, VAR_9, sizeof(struct in6_addr)) &&
     !FUNC_1(&VAR_8->src_ipv6, VAR_9, sizeof(struct in6_addr))) {
  VAR_8->mode = VAR_2;
 } else {
  FUNC_0(VAR_7, "Invalid N-tuple\n");
  return -VAR_0;
 }

 VAR_8->ip_comp = VAR_6;
 VAR_8->build_hdr = VAR_5;

 return 0;
}
