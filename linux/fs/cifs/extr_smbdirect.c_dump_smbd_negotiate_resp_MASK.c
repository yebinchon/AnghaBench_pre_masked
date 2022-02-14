
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbd_negotiate_resp {int max_fragmented_size; int max_receive_size; int preferred_send_size; int max_readwrite_size; int status; int credits_granted; int credits_requested; int negotiated_version; int max_version; int min_version; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct smbd_negotiate_resp *VAR_1)
{
 FUNC_0(VAR_0, "resp message min_version %u max_version %u "
  "negotiated_version %u credits_requested %u "
  "credits_granted %u status %u max_readwrite_size %u "
  "preferred_send_size %u max_receive_size %u "
  "max_fragmented_size %u\n",
  VAR_1->min_version, VAR_1->max_version, VAR_1->negotiated_version,
  VAR_1->credits_requested, VAR_1->credits_granted, VAR_1->status,
  VAR_1->max_readwrite_size, VAR_1->preferred_send_size,
  VAR_1->max_receive_size, VAR_1->max_fragmented_size);
}
