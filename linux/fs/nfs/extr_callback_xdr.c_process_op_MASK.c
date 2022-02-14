
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xdr_stream {long end; long p; } ;
struct svc_rqst {int dummy; } ;
struct cb_process_state {int minorversion; scalar_t__ drc_status; } ;
struct callback_op {scalar_t__ (* decode_args ) (struct svc_rqst*,struct xdr_stream*,void*) ;scalar_t__ (* process_op ) (void*,void*,struct cb_process_state*) ;scalar_t__ (* encode_res ) (struct svc_rqst*,struct xdr_stream*,void*) ;} ;
typedef scalar_t__ __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 long VAR_4 ;
 struct callback_op* VAR_5 ;
 scalar_t__ FUNC_0 (struct xdr_stream*,unsigned int*) ;
 scalar_t__ FUNC_1 (struct xdr_stream*,unsigned int,scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int,unsigned int,struct callback_op**) ;
 scalar_t__ FUNC_5 (int,unsigned int,struct callback_op**) ;
 scalar_t__ FUNC_6 (unsigned int,struct callback_op**) ;
 scalar_t__ FUNC_7 (struct svc_rqst*,struct xdr_stream*,void*) ;
 scalar_t__ FUNC_8 (void*,void*,struct cb_process_state*) ;
 scalar_t__ FUNC_9 (struct svc_rqst*,struct xdr_stream*,void*) ;
 scalar_t__ FUNC_10 (scalar_t__) ;

__attribute__((used)) static __be32 FUNC_11(int VAR_6, struct svc_rqst *VAR_7,
  struct xdr_stream *VAR_8, void *VAR_9,
  struct xdr_stream *VAR_10, void *VAR_11,
  struct cb_process_state *VAR_12)
{
 struct callback_op *VAR_13 = &VAR_5[0];
 unsigned int VAR_14;
 __be32 VAR_15;
 long VAR_16;
 __be32 VAR_17;

 VAR_15 = FUNC_0(VAR_8, &VAR_14);
 if (FUNC_10(VAR_15))
  return VAR_15;

 switch (VAR_12->minorversion) {
 case 0:
  VAR_15 = FUNC_6(VAR_14, &VAR_13);
  break;
 case 1:
  VAR_15 = FUNC_4(VAR_6, VAR_14, &VAR_13);
  break;
 case 2:
  VAR_15 = FUNC_5(VAR_6, VAR_14, &VAR_13);
  break;
 default:
  VAR_15 = FUNC_2(VAR_0);
 }

 if (VAR_15 == FUNC_2(VAR_1))
  VAR_14 = VAR_3;
 if (VAR_15)
  goto encode_hdr;

 if (VAR_12->drc_status) {
  VAR_15 = VAR_12->drc_status;
  goto encode_hdr;
 }

 VAR_16 = VAR_10->end - VAR_10->p;
 if (VAR_16 > 0 && VAR_16 < VAR_4) {
  VAR_15 = VAR_13->decode_args(VAR_7, VAR_8, VAR_9);
  if (FUNC_3(VAR_15 == 0))
   VAR_15 = VAR_13->process_op(VAR_9, VAR_11, VAR_12);
 } else
  VAR_15 = FUNC_2(VAR_2);

encode_hdr:
 VAR_17 = FUNC_1(VAR_10, VAR_14, VAR_15);
 if (FUNC_10(VAR_17))
  return VAR_17;
 if (VAR_13->encode_res != ((void*)0) && VAR_15 == 0)
  VAR_15 = VAR_13->encode_res(VAR_7, VAR_10, VAR_11);
 return VAR_15;
}
