
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gb_connection {int dummy; } ;
struct gb_audio_topology {int size; } ;
struct gb_audio_get_topology_size_response {int size; } ;
typedef int size_resp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct gb_connection*,int ,int *,int ,struct gb_audio_topology*,int) ;
 int FUNC_1 (struct gb_audio_topology*) ;
 struct gb_audio_topology* FUNC_2 (int,int ) ;
 int FUNC_3 (int ) ;

int FUNC_4(struct gb_connection *VAR_5,
        struct gb_audio_topology **VAR_6)
{
 struct gb_audio_get_topology_size_response VAR_7;
 struct gb_audio_topology *VAR_8;
 u16 VAR_9;
 int VAR_10;

 VAR_10 = FUNC_0(VAR_5, VAR_3,
    ((void*)0), 0, &VAR_7, sizeof(VAR_7));
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_3(VAR_7.size);
 if (VAR_9 < sizeof(*VAR_8))
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_9, VAR_4);
 if (!VAR_8)
  return -VAR_1;

 VAR_10 = FUNC_0(VAR_5, VAR_2, ((void*)0), 0,
    VAR_8, VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_8);
  return VAR_10;
 }

 *VAR_6 = VAR_8;

 return 0;
}
