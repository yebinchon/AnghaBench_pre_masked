
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ip_tunnel_info {int options_len; } ;


 int VAR_0 ;
 struct ip_tunnel_info* FUNC_0 (struct ip_tunnel_info const*,size_t,int ) ;

__attribute__((used)) static struct ip_tunnel_info *FUNC_1(const struct ip_tunnel_info *VAR_1)
{
 size_t VAR_2 = sizeof(*VAR_1) + VAR_1->options_len;

 return FUNC_0(VAR_1, VAR_2, VAR_0);
}
