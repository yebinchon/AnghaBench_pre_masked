
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct rvu {int dummy; } ;
struct TYPE_2__ {int vtag_type; scalar_t__ strip_vtag; scalar_t__ capture_vtag; } ;
struct nix_vtag_config {scalar_t__ vtag_size; TYPE_1__ rx; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct rvu*,int,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct rvu *VAR_2, int VAR_3, int VAR_4,
      struct nix_vtag_config *VAR_5)
{
 u64 VAR_6 = VAR_5->vtag_size;

 if (VAR_5->rx.vtag_type > 7 || VAR_5->vtag_size > VAR_1)
  return -VAR_0;

 if (VAR_5->rx.capture_vtag)
  VAR_6 |= FUNC_0(5);
 if (VAR_5->rx.strip_vtag)
  VAR_6 |= FUNC_0(4);

 FUNC_2(VAR_2, VAR_4,
      FUNC_1(VAR_3, VAR_5->rx.vtag_type), VAR_6);
 return 0;
}
