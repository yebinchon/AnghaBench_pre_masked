
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {void* atio_ring; int atio_q_length; } ;
struct qla_hw_data {TYPE_1__ tgt; } ;
struct qla2xxx_mqueue_header {void* size; void* number; void* queue; } ;
struct qla2xxx_mqueue_chain {int type; void* chain_size; } ;
typedef int request_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,void*,int) ;

__attribute__((used)) static inline void *
FUNC_2(struct qla_hw_data *VAR_2, void *VAR_3,
 uint32_t **VAR_4)
{
 struct qla2xxx_mqueue_chain *VAR_5;
 struct qla2xxx_mqueue_header *VAR_6;
 uint32_t VAR_7;
 int VAR_8;
 struct {
  int length;
  void *ring;
 } VAR_9, *VAR_10;

 if (!VAR_2->tgt.atio_ring)
  return VAR_3;

 VAR_7 = 1;
 VAR_10 = &VAR_9;
 VAR_10->length = VAR_2->tgt.atio_q_length;
 VAR_10->ring = VAR_2->tgt.atio_ring;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {

  VAR_5 = VAR_3;
  *VAR_4 = &VAR_5->type;
  VAR_5->type = FUNC_0(VAR_0);
  VAR_5->chain_size = FUNC_0(
      sizeof(struct qla2xxx_mqueue_chain) +
      sizeof(struct qla2xxx_mqueue_header) +
      (VAR_10->length * sizeof(request_t)));
  VAR_3 += sizeof(struct qla2xxx_mqueue_chain);


  VAR_6 = VAR_3;
  VAR_6->queue = FUNC_0(VAR_1);
  VAR_6->number = FUNC_0(VAR_8);
  VAR_6->size = FUNC_0(VAR_10->length * sizeof(request_t));
  VAR_3 += sizeof(struct qla2xxx_mqueue_header);


  FUNC_1(VAR_3, VAR_10->ring, VAR_10->length * sizeof(request_t));

  VAR_3 += VAR_10->length * sizeof(request_t);
 }

 return VAR_3;
}
