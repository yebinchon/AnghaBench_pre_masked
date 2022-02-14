
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int val ;
struct socket {int dummy; } ;
struct smb_rqst {int rq_nvec; unsigned int rq_npages; int * rq_pages; struct kvec* rq_iov; } ;
struct msghdr {int msg_iter; } ;
struct kvec {int iov_len; int * iov_base; } ;
struct bio_vec {int bv_len; int bv_offset; int bv_page; } ;
struct TCP_Server_Info {int hostname; int CurrentMid; int tcpStatus; TYPE_1__* vals; scalar_t__ smbd_conn; struct socket* ssocket; } ;
typedef int sigset_t ;
typedef int __be32 ;
struct TYPE_2__ {scalar_t__ header_preamble_size; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,char*,...) ;
 scalar_t__ FUNC_1 (struct TCP_Server_Info*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (unsigned int) ;
 int VAR_10 ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,int ,struct bio_vec*,int,int ) ;
 int FUNC_6 (int *,int ,struct kvec*,int,size_t) ;
 int FUNC_7 (struct socket*,int ,int ,char*,int) ;
 int FUNC_8 (struct smb_rqst*,unsigned int,int *,int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int *,int *) ;
 scalar_t__ FUNC_12 (struct TCP_Server_Info*,struct smb_rqst*) ;
 int FUNC_13 (struct TCP_Server_Info*,struct msghdr*,size_t*) ;
 int FUNC_14 (struct TCP_Server_Info*,int,struct smb_rqst*) ;
 int FUNC_15 (int ,int ) ;

__attribute__((used)) static int
FUNC_16(struct TCP_Server_Info *VAR_11, int VAR_12,
  struct smb_rqst *VAR_13)
{
 int VAR_14 = 0;
 struct kvec *VAR_15;
 int VAR_16;
 unsigned int VAR_17 = 0;
 unsigned int VAR_18, VAR_19;
 sigset_t VAR_20, VAR_21;
 size_t VAR_22 = 0, VAR_23, VAR_24;
 struct socket *VAR_25 = VAR_11->ssocket;
 struct msghdr VAR_26;
 int VAR_27 = 1;
 __be32 VAR_28;

 if (FUNC_1(VAR_11) && VAR_11->smbd_conn) {
  VAR_14 = FUNC_14(VAR_11, VAR_12, VAR_13);
  goto smbd_done;
 }

 if (VAR_25 == ((void*)0))
  return -VAR_1;

 if (FUNC_10(VAR_10)) {
  FUNC_0(VAR_3, "signal is pending before sending any data\n");
  return -VAR_2;
 }


 FUNC_7(VAR_25, VAR_6, VAR_7,
    (char *)&VAR_27, sizeof(VAR_27));

 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++)
  VAR_17 += FUNC_12(VAR_11, &VAR_13[VAR_19]);
 VAR_28 = FUNC_3(VAR_17);
 FUNC_9(&VAR_20);
 FUNC_11(VAR_4, &VAR_20, &VAR_21);


 if (VAR_11->vals->header_preamble_size == 0) {
  struct kvec VAR_29 = {
   .iov_base = &VAR_28,
   .iov_len = 4
  };
  FUNC_6(&VAR_26.msg_iter, VAR_9, &VAR_29, 1, 4);
  VAR_14 = FUNC_13(VAR_11, &VAR_26, &VAR_23);
  if (VAR_14 < 0)
   goto unmask;

  VAR_22 += VAR_23;
  VAR_17 += 4;
 }

 FUNC_0(VAR_3, "Sending smb: smb_len=%u\n", VAR_17);

 for (VAR_19 = 0; VAR_19 < VAR_12; VAR_19++) {
  VAR_15 = VAR_13[VAR_19].rq_iov;
  VAR_16 = VAR_13[VAR_19].rq_nvec;

  VAR_24 = 0;
  for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
   FUNC_4(VAR_15[VAR_18].iov_base, VAR_15[VAR_18].iov_len);
   VAR_24 += VAR_15[VAR_18].iov_len;
  }

  FUNC_6(&VAR_26.msg_iter, VAR_9, VAR_15, VAR_16, VAR_24);

  VAR_14 = FUNC_13(VAR_11, &VAR_26, &VAR_23);
  if (VAR_14 < 0)
   goto unmask;

  VAR_22 += VAR_23;


  for (VAR_18 = 0; VAR_18 < VAR_13[VAR_19].rq_npages; VAR_18++) {
   struct bio_vec VAR_30;

   VAR_30.bv_page = VAR_13[VAR_19].rq_pages[VAR_18];
   FUNC_8(&VAR_13[VAR_19], VAR_18, &VAR_30.bv_len,
          &VAR_30.bv_offset);

   FUNC_5(&VAR_26.msg_iter, VAR_9,
          &VAR_30, 1, VAR_30.bv_len);
   VAR_14 = FUNC_13(VAR_11, &VAR_26, &VAR_23);
   if (VAR_14 < 0)
    break;

   VAR_22 += VAR_23;
  }
 }

unmask:
 FUNC_11(VAR_5, &VAR_21, ((void*)0));
 if (FUNC_10(VAR_10) && (VAR_22 != VAR_17)) {
  FUNC_0(VAR_3, "signal is pending after attempt to send\n");
  VAR_14 = -VAR_2;
 }


 VAR_27 = 0;
 FUNC_7(VAR_25, VAR_6, VAR_7,
    (char *)&VAR_27, sizeof(VAR_27));

 if ((VAR_22 > 0) && (VAR_22 != VAR_17)) {
  FUNC_0(VAR_3, "partial send (wanted=%u sent=%zu): terminating session\n",
    VAR_17, VAR_22);





  VAR_11->tcpStatus = VAR_0;
  FUNC_15(VAR_11->CurrentMid,
        VAR_11->hostname);
 }
smbd_done:
 if (VAR_14 < 0 && VAR_14 != -VAR_2)
  FUNC_2(VAR_8, "Error %d sending data on socket to server\n",
    VAR_14);
 else if (VAR_14 > 0)
  VAR_14 = 0;

 return VAR_14;
}
