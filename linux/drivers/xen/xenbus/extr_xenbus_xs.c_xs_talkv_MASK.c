
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xsd_sockmsg {int type; unsigned int len; int tx_id; scalar_t__ req_id; } ;
struct xenbus_transaction {int id; } ;
struct xb_req_data {unsigned int num_vecs; int user_req; int cb; struct kvec const* vec; } ;
struct kvec {scalar_t__ iov_len; } ;
typedef enum xsd_sockmsg_type { ____Placeholder_xsd_sockmsg_type } xsd_sockmsg_type ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 struct xb_req_data* FUNC_4 (int,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (struct xb_req_data*,struct xsd_sockmsg*) ;
 void* FUNC_7 (struct xb_req_data*,struct xsd_sockmsg*) ;
 int VAR_5 ;

__attribute__((used)) static void *FUNC_8(struct xenbus_transaction VAR_6,
        enum xsd_sockmsg_type VAR_7,
        const struct kvec *VAR_8,
        unsigned int VAR_9,
        unsigned int *VAR_10)
{
 struct xb_req_data *VAR_11;
 struct xsd_sockmsg VAR_12;
 void *VAR_13 = ((void*)0);
 unsigned int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_4(sizeof(*VAR_11), VAR_2 | VAR_4);
 if (!VAR_11)
  return FUNC_0(-VAR_1);

 VAR_11->vec = VAR_8;
 VAR_11->num_vecs = VAR_9;
 VAR_11->cb = VAR_5;
 VAR_11->user_req = 0;

 VAR_12.req_id = 0;
 VAR_12.tx_id = VAR_6.id;
 VAR_12.type = VAR_7;
 VAR_12.len = 0;
 for (VAR_14 = 0; VAR_14 < VAR_9; VAR_14++)
  VAR_12.len += VAR_8[VAR_14].iov_len;

 FUNC_6(VAR_11, &VAR_12);

 VAR_13 = FUNC_7(VAR_11, &VAR_12);
 if (VAR_10)
  *VAR_10 = VAR_12.len;

 if (FUNC_1(VAR_13))
  return VAR_13;

 if (VAR_12.type == VAR_3) {
  VAR_15 = FUNC_2(VAR_13);
  FUNC_3(VAR_13);
  return FUNC_0(-VAR_15);
 }

 if (VAR_12.type != VAR_7) {
  FUNC_5("unexpected type [%d], expected [%d]\n",
        VAR_12.type, VAR_7);
  FUNC_3(VAR_13);
  return FUNC_0(-VAR_0);
 }
 return VAR_13;
}
