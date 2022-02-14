
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe_inode_info {int nrbufs; scalar_t__ w_counter; int buffers; int readers; int writers; int wait; } ;
struct file {int f_mode; scalar_t__ f_version; struct pipe_inode_info* private_data; } ;
typedef int poll_table ;
typedef int __poll_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct file*,int *,int *) ;

__attribute__((used)) static __poll_t
FUNC_1(struct file *VAR_8, poll_table *VAR_9)
{
 __poll_t VAR_10;
 struct pipe_inode_info *VAR_11 = VAR_8->private_data;
 int VAR_12;

 FUNC_0(VAR_8, &VAR_11->wait, VAR_9);


 VAR_12 = VAR_11->nrbufs;
 VAR_10 = 0;
 if (VAR_8->f_mode & VAR_6) {
  VAR_10 = (VAR_12 > 0) ? VAR_2 | VAR_4 : 0;
  if (!VAR_11->writers && VAR_8->f_version != VAR_11->w_counter)
   VAR_10 |= VAR_1;
 }

 if (VAR_8->f_mode & VAR_7) {
  VAR_10 |= (VAR_12 < VAR_11->buffers) ? VAR_3 | VAR_5 : 0;




  if (!VAR_11->readers)
   VAR_10 |= VAR_0;
 }

 return VAR_10;
}
