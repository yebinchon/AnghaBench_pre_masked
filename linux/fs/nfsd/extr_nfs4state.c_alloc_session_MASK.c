
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nfsd4_slot {int dummy; } ;
struct nfsd4_session {struct nfsd4_session** se_slots; int se_bchannel; int se_fchannel; } ;
struct nfsd4_channel_attrs {int maxreqs; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct nfsd4_session*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,struct nfsd4_channel_attrs*,int) ;
 int FUNC_4 (struct nfsd4_channel_attrs*) ;

__attribute__((used)) static struct nfsd4_session *FUNC_5(struct nfsd4_channel_attrs *VAR_3,
        struct nfsd4_channel_attrs *VAR_4)
{
 int VAR_5 = VAR_3->maxreqs;
 int VAR_6 = FUNC_4(VAR_3);
 struct nfsd4_session *VAR_7;
 int VAR_8, VAR_9;

 FUNC_0(VAR_1 * sizeof(struct nfsd4_slot *)
   + sizeof(struct nfsd4_session) > VAR_2);
 VAR_8 = VAR_5 * sizeof(struct nfsd4_slot *);

 VAR_7 = FUNC_2(sizeof(*VAR_7) + VAR_8, VAR_0);
 if (!VAR_7)
  return ((void*)0);

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
  VAR_7->se_slots[VAR_9] = FUNC_2(VAR_6, VAR_0);
  if (!VAR_7->se_slots[VAR_9])
   goto out_free;
 }

 FUNC_3(&VAR_7->se_fchannel, VAR_3, sizeof(struct nfsd4_channel_attrs));
 FUNC_3(&VAR_7->se_bchannel, VAR_4, sizeof(struct nfsd4_channel_attrs));

 return VAR_7;
out_free:
 while (VAR_9--)
  FUNC_1(VAR_7->se_slots[VAR_9]);
 FUNC_1(VAR_7);
 return ((void*)0);
}
