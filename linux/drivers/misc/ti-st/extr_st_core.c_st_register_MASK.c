
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_proto_s {size_t chnl_id; void* write; int * reg_complete_cb; int * recv; } ;
struct st_data_s {int* is_registered; scalar_t__ protos_registered; int lock; int st_state; int kim_data; } ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct st_data_s*,struct st_proto_s*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,size_t) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 (struct st_data_s**,int ) ;
 long FUNC_9 (int ) ;
 int FUNC_10 (struct st_data_s*) ;
 int VAR_10 ;
 int FUNC_11 (struct st_data_s*,long) ;
 void* VAR_11 ;
 scalar_t__ FUNC_12 (int ,int *) ;

long FUNC_13(struct st_proto_s *VAR_12)
{
 struct st_data_s *VAR_13;
 long VAR_14 = 0;
 unsigned long VAR_15 = 0;

 FUNC_8(&VAR_13, 0);
 if (VAR_13 == ((void*)0) || VAR_12 == ((void*)0) || VAR_12->recv == ((void*)0)
     || VAR_12->reg_complete_cb == ((void*)0)) {
  FUNC_3("gdata/new_proto/recv or reg_complete_cb not ready");
  return -VAR_2;
 }

 if (VAR_12->chnl_id >= VAR_5) {
  FUNC_3("chnl_id %d not supported", VAR_12->chnl_id);
  return -VAR_3;
 }

 if (VAR_13->is_registered[VAR_12->chnl_id] == 1) {
  FUNC_3("chnl_id %d already registered", VAR_12->chnl_id);
  return -VAR_0;
 }


 FUNC_6(&VAR_13->lock, VAR_15);

 if (FUNC_12(VAR_6, &VAR_13->st_state)) {
  FUNC_4(" ST_REG_IN_PROGRESS:%d ", VAR_12->chnl_id);


  FUNC_0(VAR_13, VAR_12);
  VAR_13->protos_registered++;
  VAR_12->write = VAR_11;

  FUNC_5(VAR_7, &VAR_13->st_state);
  FUNC_7(&VAR_13->lock, VAR_15);
  return -VAR_1;
 } else if (VAR_13->protos_registered == VAR_4) {
  FUNC_4(" chnl_id list empty :%d ", VAR_12->chnl_id);
  FUNC_5(VAR_6, &VAR_13->st_state);
  VAR_10 = VAR_9;


  FUNC_10(VAR_13);


  FUNC_7(&VAR_13->lock, VAR_15);




  VAR_14 = FUNC_9(VAR_13->kim_data);
  if (VAR_14 != 0) {
   FUNC_1(VAR_6, &VAR_13->st_state);
   if ((VAR_13->protos_registered != VAR_4) &&
       (FUNC_12(VAR_7, &VAR_13->st_state))) {
    FUNC_3(" KIM failure complete callback ");
    FUNC_6(&VAR_13->lock, VAR_15);
    FUNC_11(VAR_13, VAR_14);
    FUNC_7(&VAR_13->lock, VAR_15);
    FUNC_1(VAR_7, &VAR_13->st_state);
   }
   return -VAR_2;
  }

  FUNC_6(&VAR_13->lock, VAR_15);

  FUNC_1(VAR_6, &VAR_13->st_state);
  VAR_10 = VAR_8;




  if ((VAR_13->protos_registered != VAR_4) &&
      (FUNC_12(VAR_7, &VAR_13->st_state))) {
   FUNC_2(" call reg complete callback ");
   FUNC_11(VAR_13, 0);
  }
  FUNC_1(VAR_7, &VAR_13->st_state);




  if (VAR_13->is_registered[VAR_12->chnl_id] == 1) {
   FUNC_3(" proto %d already registered ",
       VAR_12->chnl_id);
   FUNC_7(&VAR_13->lock, VAR_15);
   return -VAR_0;
  }

  FUNC_0(VAR_13, VAR_12);
  VAR_13->protos_registered++;
  VAR_12->write = VAR_11;
  FUNC_7(&VAR_13->lock, VAR_15);
  return VAR_14;
 }

 else {
  FUNC_0(VAR_13, VAR_12);
  VAR_13->protos_registered++;
  VAR_12->write = VAR_11;


  FUNC_7(&VAR_13->lock, VAR_15);
  return VAR_14;
 }
}
