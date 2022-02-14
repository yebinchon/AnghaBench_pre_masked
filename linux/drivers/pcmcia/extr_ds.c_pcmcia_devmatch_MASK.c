
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device_id {int match_flags; scalar_t__ manf_id; scalar_t__ card_id; scalar_t__ function; scalar_t__ device_no; scalar_t__ func_id; int cisfile; int * prod_id; } ;
struct pcmcia_device {scalar_t__ manf_id; scalar_t__ card_id; scalar_t__ func; scalar_t__ device_no; scalar_t__ func_id; int allow_func_id_match; scalar_t__ has_func_id; scalar_t__ has_card_id; scalar_t__ has_manf_id; scalar_t__* prod_id; TYPE_1__* socket; int dev; } ;
struct TYPE_2__ {int pcmcia_pfc; int fake_cis; int ops_mutex; } ;


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
 int VAR_10 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct pcmcia_device*,int ) ;
 scalar_t__ FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static inline int FUNC_5(struct pcmcia_device *VAR_11,
      const struct pcmcia_device_id *VAR_12)
{
 if (VAR_12->match_flags & VAR_6) {
  if ((!VAR_11->has_manf_id) || (VAR_11->manf_id != VAR_12->manf_id))
   return 0;
 }

 if (VAR_12->match_flags & VAR_1) {
  if ((!VAR_11->has_card_id) || (VAR_11->card_id != VAR_12->card_id))
   return 0;
 }

 if (VAR_12->match_flags & VAR_4) {
  if (VAR_11->func != VAR_12->function)
   return 0;
 }

 if (VAR_12->match_flags & VAR_7) {
  if (!VAR_11->prod_id[0])
   return 0;
  if (FUNC_4(VAR_12->prod_id[0], VAR_11->prod_id[0]))
   return 0;
 }

 if (VAR_12->match_flags & VAR_8) {
  if (!VAR_11->prod_id[1])
   return 0;
  if (FUNC_4(VAR_12->prod_id[1], VAR_11->prod_id[1]))
   return 0;
 }

 if (VAR_12->match_flags & VAR_9) {
  if (!VAR_11->prod_id[2])
   return 0;
  if (FUNC_4(VAR_12->prod_id[2], VAR_11->prod_id[2]))
   return 0;
 }

 if (VAR_12->match_flags & VAR_10) {
  if (!VAR_11->prod_id[3])
   return 0;
  if (FUNC_4(VAR_12->prod_id[3], VAR_11->prod_id[3]))
   return 0;
 }

 if (VAR_12->match_flags & VAR_2) {
  FUNC_0(&VAR_11->dev, "this is a pseudo-multi-function device\n");
  FUNC_1(&VAR_11->socket->ops_mutex);
  VAR_11->socket->pcmcia_pfc = 1;
  FUNC_2(&VAR_11->socket->ops_mutex);
  if (VAR_11->device_no != VAR_12->device_no)
   return 0;
 }

 if (VAR_12->match_flags & VAR_5) {
  int VAR_13;

  if ((!VAR_11->has_func_id) || (VAR_11->func_id != VAR_12->func_id))
   return 0;



  if (VAR_11->socket->pcmcia_pfc)
   return 0;
  if (VAR_11->device_no)
   return 0;





  FUNC_1(&VAR_11->socket->ops_mutex);
  VAR_13 = VAR_11->allow_func_id_match;
  FUNC_2(&VAR_11->socket->ops_mutex);

  if (!VAR_13) {
   FUNC_0(&VAR_11->dev,
    "skipping FUNC_ID match until userspace ACK\n");
   return 0;
  }
 }

 if (VAR_12->match_flags & VAR_3) {
  FUNC_0(&VAR_11->dev, "device needs a fake CIS\n");
  if (!VAR_11->socket->fake_cis)
   if (FUNC_3(VAR_11, VAR_12->cisfile))
    return 0;
 }

 if (VAR_12->match_flags & VAR_0) {
  int VAR_14;
  for (VAR_14 = 0; VAR_14 < 4; VAR_14++)
   if (VAR_11->prod_id[VAR_14])
    return 0;
  if (VAR_11->has_manf_id || VAR_11->has_card_id || VAR_11->has_func_id)
   return 0;
 }

 return 1;
}
