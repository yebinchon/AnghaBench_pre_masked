
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct dst_state {int type_flags; scalar_t__* rxbuffer; int dst_mutex; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,char*,...) ;
 scalar_t__ FUNC_1 (scalar_t__*,int) ;
 scalar_t__ FUNC_2 (struct dst_state*) ;
 scalar_t__ FUNC_3 (struct dst_state*) ;
 scalar_t__ FUNC_4 (struct dst_state*) ;
 int FUNC_5 (struct dst_state*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (struct dst_state*,scalar_t__*,int ) ;
 int FUNC_11 (int) ;
 scalar_t__ FUNC_12 (struct dst_state*,scalar_t__*,scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct dst_state *VAR_6, u8 *VAR_7, u8 VAR_8)
{
 u8 VAR_9;

 FUNC_7(&VAR_6->dst_mutex);
 if ((FUNC_2(VAR_6)) < 0) {
  FUNC_0(1, "DST Communication Initialization Failed.\n");
  goto error;
 }
 if (FUNC_12(VAR_6, VAR_7, VAR_8)) {
  FUNC_0(2, "Trying to recover..\n");
  if ((FUNC_3(VAR_6)) < 0) {
   FUNC_9("Recovery Failed.\n");
   goto error;
  }
  goto error;
 }
 if ((FUNC_4(VAR_6)) < 0) {
  FUNC_9("PIO Disable Failed.\n");
  goto error;
 }
 if (VAR_6->type_flags & VAR_1)
  FUNC_6(3);
 if (FUNC_10(VAR_6, &VAR_9, VAR_4)) {
  FUNC_0(3, "Trying to recover..\n");
  if ((FUNC_3(VAR_6)) < 0) {
   FUNC_0(2, "Recovery Failed.\n");
   goto error;
  }
  goto error;
 }
 if (VAR_9 != VAR_0) {
  FUNC_0(2, "write not acknowledged 0x%02x\n", VAR_9);
  goto error;
 }
 if (VAR_8 >= 2 && VAR_7[0] == 0 && (VAR_7[1] == 1 || VAR_7[1] == 3))
  goto error;
 if (VAR_6->type_flags & VAR_1)
  FUNC_6(3);
 else
  FUNC_11(2000);
 if (!FUNC_5(VAR_6, VAR_5))
  goto error;
 if (FUNC_10(VAR_6, VAR_6->rxbuffer, VAR_3)) {
  FUNC_0(3, "Trying to recover..\n");
  if ((FUNC_3(VAR_6)) < 0) {
   FUNC_0(2, "Recovery failed.\n");
   goto error;
  }
  goto error;
 }
 if (VAR_6->rxbuffer[7] != FUNC_1(VAR_6->rxbuffer, 7)) {
  FUNC_0(2, "checksum failure\n");
  goto error;
 }
 FUNC_8(&VAR_6->dst_mutex);
 return 0;

error:
 FUNC_8(&VAR_6->dst_mutex);
 return -VAR_2;

}
