
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct esas2r_request {int req_stat; int * interrupt_cb; scalar_t__ interrupt_cx; } ;
struct esas2r_flash_img {int driver_error; scalar_t__ status; } ;
struct esas2r_flash_context {int scratch; struct esas2r_flash_img* fi; } ;
struct esas2r_adapter {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct esas2r_adapter*) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static bool FUNC_3(struct esas2r_adapter *VAR_4,
          struct esas2r_request *VAR_5, u8 VAR_6)
{
 struct esas2r_flash_context *VAR_7 =
  (struct esas2r_flash_context *)VAR_5->interrupt_cx;
 struct esas2r_flash_img *VAR_8 = VAR_7->fi;

 VAR_8->status = VAR_6;
 VAR_8->driver_error = VAR_5->req_stat;
 VAR_5->interrupt_cb = ((void*)0);
 VAR_5->req_stat = VAR_3;

 if (VAR_6 != VAR_1)
  FUNC_2(VAR_7->scratch, 0, VAR_2);

 FUNC_1(VAR_4);
 FUNC_0(VAR_0, &VAR_4->flags);
 return 0;
}
