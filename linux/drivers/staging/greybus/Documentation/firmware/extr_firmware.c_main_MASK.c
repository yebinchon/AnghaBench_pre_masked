
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 char* VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,char*) ;
 void* FUNC_5 (char*,char**,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;

int FUNC_9(int VAR_8, char *VAR_9[])
{
 int VAR_10, VAR_11;
 char *VAR_12;

 if (VAR_8 > 1 &&
     (!FUNC_4(VAR_9[1], "-h") || !FUNC_4(VAR_9[1], "--help"))) {
  FUNC_8();
  return -1;
 }

 if (VAR_8 > 1)
  VAR_7 = VAR_9[1];

 if (VAR_8 > 2)
  VAR_6 = FUNC_5(VAR_9[2], &VAR_12, 10);

 if (VAR_8 > 3)
  VAR_4 = VAR_9[3];
 else if (!VAR_6)
  VAR_4 = VAR_2;
 else
  VAR_4 = VAR_1;

 if (VAR_8 > 4)
  VAR_5 = FUNC_5(VAR_9[4], &VAR_12, 10);

 FUNC_3("Trying Firmware update: fwdev: %s, type: %s, tag: %s, timeout: %u\n",
  VAR_7, VAR_6 == 0 ? "interface" : "backend",
  VAR_4, VAR_5);

 FUNC_3("Opening %s firmware management device\n", VAR_7);

 VAR_10 = FUNC_2(VAR_7, VAR_3);
 if (VAR_10 < 0) {
  FUNC_3("Failed to open: %s\n", VAR_7);
  return -1;
 }


 FUNC_3("Setting timeout to %u ms\n", VAR_5);

 VAR_11 = FUNC_1(VAR_10, VAR_0, &VAR_5);
 if (VAR_11 < 0) {
  FUNC_3("Failed to set timeout: %s (%d)\n", VAR_7, VAR_11);
  VAR_11 = -1;
  goto close_fd;
 }

 if (!VAR_6)
  VAR_11 = FUNC_7(VAR_10);
 else
  VAR_11 = FUNC_6(VAR_10);

close_fd:
 FUNC_0(VAR_10);

 return VAR_11;
}
