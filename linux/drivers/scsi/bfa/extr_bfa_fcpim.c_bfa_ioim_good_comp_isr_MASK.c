
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct bfi_msg_s {int dummy; } ;
struct bfi_ioim_rsp_s {int io_tag; } ;
struct bfa_s {int dummy; } ;
struct bfa_ioim_s {scalar_t__ iotag; } ;
struct bfa_fcpim_s {int dummy; } ;


 struct bfa_fcpim_s* FUNC_0 (struct bfa_s*) ;
 struct bfa_ioim_s* FUNC_1 (struct bfa_fcpim_s*,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct bfa_fcpim_s*,struct bfa_ioim_s*) ;
 int FUNC_5 (struct bfa_ioim_s*,int ) ;

void
FUNC_6(struct bfa_s *VAR_1, struct bfi_msg_s *VAR_2)
{
 struct bfa_fcpim_s *VAR_3 = FUNC_0(VAR_1);
 struct bfi_ioim_rsp_s *VAR_4 = (struct bfi_ioim_rsp_s *) VAR_2;
 struct bfa_ioim_s *VAR_5;
 u16 VAR_6;

 VAR_6 = FUNC_3(VAR_4->io_tag);

 VAR_5 = FUNC_1(VAR_3, VAR_6);
 FUNC_2(VAR_5->iotag != VAR_6);

 FUNC_4(VAR_3, VAR_5);

 FUNC_5(VAR_5, VAR_0);
}
