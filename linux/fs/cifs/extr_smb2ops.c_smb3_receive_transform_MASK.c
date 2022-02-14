
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smb2_transform_hdr {int OriginalMessageSize; } ;
struct smb2_sync_hdr {int dummy; } ;
struct mid_q_entry {int dummy; } ;
struct TCP_Server_Info {char* smallbuf; unsigned int pdu_size; int response_q; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct TCP_Server_Info*) ;
 int VAR_2 ;
 int FUNC_1 (struct TCP_Server_Info*) ;
 int FUNC_2 (int ,char*,...) ;
 unsigned int FUNC_3 (int ) ;
 int FUNC_4 (struct TCP_Server_Info*,struct mid_q_entry**,int*) ;
 int FUNC_5 (struct TCP_Server_Info*,struct mid_q_entry**,char**,int*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(struct TCP_Server_Info *VAR_3,
         struct mid_q_entry **VAR_4, char **VAR_5, int *VAR_6)
{
 char *VAR_7 = VAR_3->smallbuf;
 unsigned int VAR_8 = VAR_3->pdu_size;
 struct smb2_transform_hdr *VAR_9 = (struct smb2_transform_hdr *)VAR_7;
 unsigned int VAR_10 = FUNC_3(VAR_9->OriginalMessageSize);

 if (VAR_8 < sizeof(struct smb2_transform_hdr) +
      sizeof(struct smb2_sync_hdr)) {
  FUNC_2(VAR_2, "Transform message is too small (%u)\n",
    VAR_8);
  FUNC_1(VAR_3);
  FUNC_6(&VAR_3->response_q);
  return -VAR_1;
 }

 if (VAR_8 < VAR_10 + sizeof(struct smb2_transform_hdr)) {
  FUNC_2(VAR_2, "Transform message is broken\n");
  FUNC_1(VAR_3);
  FUNC_6(&VAR_3->response_q);
  return -VAR_1;
 }


 if (VAR_8 > VAR_0 + FUNC_0(VAR_3)) {
  return FUNC_4(VAR_3, &VAR_4[0], VAR_6);
 }

 return FUNC_5(VAR_3, VAR_4, VAR_5, VAR_6);
}
