
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rio_channel {int id; } ;
struct rio_ch_chan_hdr {int dst_ch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rio_channel* FUNC_0 (int *,int) ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rio_channel*) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct rio_channel*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(void *VAR_5)
{
 struct rio_channel *VAR_6;
 struct rio_ch_chan_hdr *VAR_7 = VAR_5;
 int VAR_8;

 FUNC_4(VAR_2, "for ch=%d", FUNC_2(VAR_7->dst_ch));

 FUNC_6(&VAR_4);
 VAR_6 = FUNC_0(&VAR_3, FUNC_2(VAR_7->dst_ch));
 if (!VAR_6) {
  FUNC_7(&VAR_4);
  return -VAR_0;
 }
 FUNC_1(&VAR_3, VAR_6->id);
 FUNC_7(&VAR_4);

 FUNC_5(VAR_6, VAR_1);

 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  FUNC_4(VAR_2, "riocm_ch_close() returned %d", VAR_8);

 return 0;
}
