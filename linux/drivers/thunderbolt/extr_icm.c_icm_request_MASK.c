
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tb_cfg_result {int err; } ;
struct tb_cfg_request {size_t request_size; size_t npackets; size_t response_size; int response_type; void* response; int request_type; void const* request; int copy; int match; } ;
struct tb {int ctl; } ;
struct icm {int request_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct tb_cfg_request* FUNC_2 () ;
 int FUNC_3 (struct tb_cfg_request*) ;
 struct tb_cfg_result FUNC_4 (int ,struct tb_cfg_request*,unsigned int) ;
 struct icm* FUNC_5 (struct tb*) ;
 int FUNC_6 (int,int) ;

__attribute__((used)) static int FUNC_7(struct tb *VAR_7, const void *VAR_8, size_t VAR_9,
         void *VAR_10, size_t VAR_11, size_t VAR_12,
         unsigned int VAR_13)
{
 struct icm *VAR_14 = FUNC_5(VAR_7);
 int VAR_15 = 3;

 do {
  struct tb_cfg_request *VAR_16;
  struct tb_cfg_result VAR_17;

  VAR_16 = FUNC_2();
  if (!VAR_16)
   return -VAR_1;

  VAR_16->match = VAR_6;
  VAR_16->copy = VAR_5;
  VAR_16->request = VAR_8;
  VAR_16->request_size = VAR_9;
  VAR_16->request_type = VAR_3;
  VAR_16->response = VAR_10;
  VAR_16->npackets = VAR_12;
  VAR_16->response_size = VAR_11;
  VAR_16->response_type = VAR_4;

  FUNC_0(&VAR_14->request_lock);
  VAR_17 = FUNC_4(VAR_7->ctl, VAR_16, VAR_13);
  FUNC_1(&VAR_14->request_lock);

  FUNC_3(VAR_16);

  if (VAR_17.err != -VAR_2)
   return VAR_17.err == 1 ? -VAR_0 : VAR_17.err;

  FUNC_6(20, 50);
 } while (VAR_15--);

 return -VAR_2;
}
