
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdomain_request_work {int work; int tb; int pkg; } ;
struct tb_xdp_header {int dummy; } ;
struct tb {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (struct xdomain_request_work*) ;
 struct xdomain_request_work* FUNC_2 (int,int ) ;
 int FUNC_3 (struct tb_xdp_header const*,size_t,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct tb*) ;
 int VAR_1 ;

__attribute__((used)) static bool
FUNC_6(struct tb *VAR_2, const struct tb_xdp_header *VAR_3,
   size_t VAR_4)
{
 struct xdomain_request_work *VAR_5;

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return 0;

 FUNC_0(&VAR_5->work, VAR_1);
 VAR_5->pkg = FUNC_3(VAR_3, VAR_4, VAR_0);
 if (!VAR_5->pkg) {
  FUNC_1(VAR_5);
  return 0;
 }
 VAR_5->tb = FUNC_5(VAR_2);

 FUNC_4(&VAR_5->work);
 return 1;
}
